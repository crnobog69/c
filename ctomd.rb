require 'fileutils'

def c_to_md_converter(input_dir)
  # Пролазак кроз све датотеке и поддиректоријуме
  Dir.glob("#{input_dir}/**/*").each do |file|
    if File.file?(file) && File.extname(file) == ".c"
      # Читање .c датотеке и прављење .md датотеке
      code_content = File.read(file)
      md_content = "```c\n#{code_content}\n```"

      output_path = File.join(File.dirname(file), File.basename(file, ".c") + ".md")
      File.write(output_path, md_content)

      puts "Конвертован: #{file} -> #{output_path}"
    end
  end
end

# Пример коришћења
def main
  input_directory = "." # Промените у ваш улазни директоријум
  c_to_md_converter(input_directory)
end

main if __FILE__ == $0

# Пронађи све .c датотеке у свим директоријумима, али прескочи директоријум 'windows'
Dir.glob('**/*.c').reject { |file| file.include?('windows') }.each do |source_file|
    # Направи име .o датотеке
    object_file = source_file.sub('.c', '.o')
    
    puts "Копајлирам #{source_file} у #{object_file}..."
    
    # Користи gcc за компајлирање са -lm за math.h
    system("gcc -c \"#{source_file}\" -o \"#{object_file}\" -lm")
    
    if $?.exitstatus != 0
      puts "Грешка при компајлирању фајла: #{source_file}"
      exit 1
    end
  end
  
  # Линковати све .o фајлове у извршни фајл
  puts "Линковали све .o фајлове у извршни фајл..."
  
  # Линковање са -lm опцијом ако користите math.h
  system('gcc *.o -o program -lm')
  
  if $?.exitstatus != 0
    puts "Грешка при линковању фајлова."
    exit 1
  end
  
  puts "Све .o датотеке су успешно компајлиране и линкован је извршни фајл 'program'."
  
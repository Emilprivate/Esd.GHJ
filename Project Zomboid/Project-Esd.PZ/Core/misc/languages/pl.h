#pragma once

const std::map<std::string, std::string> PL_STRINGS = {
	{"themes", "Motywy"},
	{"focusInputs", "Fokus Wejść"},
	{"defaultTheme", "Domyślne"},
	{"purpleRetroTheme", "Fioletowo Retro"},
	{"blueRetroTheme", "Niebieskie Retro"},
	{"language", "Języki"},
	{"english", "Angielski"},
	{"chinese", "Chiński"},
	{"russian", "Rosyjski"},
	{"polish", "Polski"},
	{"portuguese", "Portugalski"},
	{"add_level_to_perks", "Dodaj poziom umiejętności:"},
	{"perk_level", "Poziom umiejętności"},
	{"perk_list", "Lista umiejętności"},
	{"build_cheat", "Cheat budowania"},
	{"enable_build_cheat", "Włącz cheat budowania"},
	{"farming_cheat", "Cheat rolnictwa"},
	{"enable_farming_cheat", "Włącz cheat rolnictwa"},
	{"health_cheat", "Cheat życia"},
	{"enable_health_cheat", "Włącz cheat życia"},
	{"mechanics_cheat", "Cheat mechaniki"},
	{"enable_mechanics_cheat", "Wlącz cheat mechaniki"},
	{"movables_cheat", "Cheat przenoszenia"},
	{"enable_movables_cheat", "Włącz cheat przenoszenia"},
	{"god_mode", "Tryb Boga"},
	{"enable_god_mode", "Włącz god mode dla gracza"},
	{"zombies_dont_attack", "Zombie Nie Atakują"},
	{"zombies_dont_attack_tooltip", "Zombie będą cię obierać za cel, ale nie zaatakują cię"},
	{"no_clip", "Przenikanie przez Obiekty"},
	{"toggle_no_clip", "Włącz no clip dla gracza"},
	{"invincible", "Niezniszczalność"},
	{"make_player_invincible", "Włącz niezniszczalność gracza"},
	{"invisible", "Niewidzialność"},
	{"make_player_invisible", "Uczyń gracza niewidzialnym"},
	{"ghost_mode", "Ghost Mode"},
	{"enable_ghost_mode", "Włącz ghost mode dla gracza"},
	{"unlimited_carry", "Nieograniczone przenoszenie"},
	{"allow_unlimited_carry", "Pozwól graczowi na przenoszenie nieograniczonej liczby przedmiotów"},
	{"unlimited_endurance", "Nieograniczona wytrzymałość"},
	{"give_unlimited_endurance", "Daj graczowi nieograniczoną wytrzymałość"},
	{"no_recoil_delay", "Brak opóźnienia odrzutu"},
	{"remove_recoil_delay", "Usuń opóźnienie odrzutu dla gracza"},
	{"no_melee_delay", "Brak opóźnienia w walce wręcz"},
	{"remove_melee_delay", "Usuń opóźnienie w walce wręcz dla gracza"},
	{"tester", "Tester"},
	{"test_new_features", "Testuj nowe funkcje"},
	{"misc_tabs", "Inne zakładki"},
	{"misc_1", "Inne 1"},
	{"misc_2", "Inne 2"},
	{"available_configs", "Dostępne konfiguracje:"},
	{"available_options", "Dostępne opcje:"},
	{"add_new_config", "Dodaj nową konfigurację:"},
	{"config_name", "Nazwa konfiguracji"},
	{"save", "Zapisz"},
	{"selected_config", "Wybrana konfiguracja: %s"},
	{"load_selected_config", "Wczytaj wybraną konfigurację"},
	{"save_edited_config", "Zapisz edytowaną konfigurację"},
	{"remove_selected_config", "Usuń wybraną konfigurację"},
	{"remove_confirmation", "Czy na pewno chcesz usunąć wybraną konfigurację?"},
	{"yes", "Tak"},
	{"no", "Nie"},
	{"config_name_exists", "Nazwa konfiguracji już istnieje. Proszę wybrać inną nazwę."},
	{"uc_thread", "Wątek UC"},
	{"project_github", "GitHub projektu"},
	{"red_github", "GitHub Red"},
	{"made_by", "Stworzone przez Red"},
	{"timed_action_instant_cheat", "Cheat natychmiastowego ukończenia akcji czasowych"},
	{"timed_action_instant_cheat_tooltip", "Włącz natychmiastowe ukończenie akcji czasowych"},
	{"start_reading", "Rozpocznij czytanie"},
	{"start_reading_tooltip", "Rozpocznij czytanie książki"},
	{"show_admin_tag", "Pokaż oznaczenie administratora"},
	{"show_admin_tag_tooltip", "Wyświetl oznaczenie administratora dla gracza"},
	{"convert_to_sandwich_maker", "Zamień na producenta kanapek"},
	{"convert_to_sandwich_maker_tooltip", "Zamień postać gracza w producenta kanapek"},
	{"set_ranged_weapon_empty", "Ustaw pusty strzelec"},
	{"set_ranged_weapon_empty_tooltip", "Ustaw pustą broń strzelecką dla gracza"},
	{"playerlist_window_title", "Okno listy graczy"},
	{"items_window_title", "Okno przedmiotów"},
	{"categories_tab_bar", "Kategorie"},
	{"Clothing", "Odzież"},
	{"Equipment", "Sprzęt"},
	{"Food", "Jedzenie"},
	{"Literature", "Literatura"},
	{"Medical", "Medycyna"},
	{"Materials", "Materiały"},
	{"Misc", "Różne"},
	{"Vehicle", "Pojazd"},
	{"Weapons", "Broń"},
	{"category_not_implemented", "Tabela dla tej kategorii nie została jeszcze zaimplementowana."},
	{"add_item_with_base_id", "Dodaj przedmiot z podstawowym ID"},
	{"amount", "Ilość"},
	{"add_item_button", "Dodaj przedmiot"},
	{"added_item", "Dodano przedmiot z podstawowym ID"},
	{"inventory_items", "Przedmioty w inwentarzu"},
	{"inventory_table_name", "Inwentarz"},
	{"column_name", "Nazwa"},
	{"column_baseid", "Podstawowe ID"},
	{"selected_item", "Wybrany przedmiot"},
	{"drag_text", "Przeciągnij %s"},
	{"context_name", "Nazwa: %s"},
	{"context_baseid", "Podstawowe ID: %s"},
	{"button_inspect", "Sprawdź"},
	{"context_amount", "Ilość"},
	{"context_add", "Dodaj"},
	{"item_added", "[+] [x%d] | Dodano przedmiot"},
	{"item_text", "Przedmiot: %s"},
	{"main_window_title", "Esd.PZ | Release 1.0"},
	{"menu_items", "Przedmioty"},
	{"menu_playerslist", "Lista graczy"},
	{"tab_player", "Gracz"},
	{"tab_skills", "Umiejętności"},
	{"tab_misc", "Inne"},
	{"tab_style", "Styl"},
	{"tab_config", "Konfiguracja"},
	{"tab_settings", "Ustawienia"},
	{"tab_about", "O programie"},
	{"terminal_window_title", "Okno terminala"},
	{"terminal_clear_button", "Wyczyść terminal"},
	{"terminal_copy_button", "Skopiuj dziennik"},
	{"terminal_scroll_checkbox", "Przewijaj na dół"},
	{"terminal_export_button", "Eksportuj"},
	{"terminal_export_failed", "Nie można otworzyć pliku: " },
	{ "player_modifications", "Modyfikacje Gracza" },
	{ "player_actions", "Akcje Gracza" },
	{ "suicide", "Samobójstwo" },
	{ "player_delays", "Opóźnienia Gracza" },
	{ "ammo_and_weapons", "Amunicja i Broń" },
	{ "manually_refill_magazine", "Ręczne Uzupełnianie Magazynka" },
	{ "rage_max_ammo", "Maksymalna Amunicja Szału" },
	{ "manually_repair_hand_item", "Ręczna Naprawa Przedmiotu Ręcznego" },
	{ "upgrade_all_perks", "Ulepsz Wszystkie Perki" },
	{ "cheat_options", "Opcje Oszukiwania" },
	{ "reinitialise_jvm_hook", "Ponowne Uruchomienie JVM Hook" },
	{ "donations", "Darowizny" },
	{ "only_multiplayer", "Działa tylko na serwerach multiplayer" },
	{ "auto_reload", "Automatycznie przeładowuje broń po wystrzeleniu amunicji" },
	{ "manual_refill_magazine", "Ręcznie uzupełnia magazynek do pełnej pojemności" },
	{ "set_max_ammo", "Ustawia maksymalną ilość amunicji w broni na określoną ilość" },
	{ "manual_repair_item", "Ręczna naprawa przedmiotu w ręce gracza" },
	{ "appreciate_donations", "Każda darowizna jest mile widziana!" },
	{ "reinitialise_jvm_hook_desc", "Ponownie zainicjuj hook JVM po ponownym dołączeniu do serwera, aby użyć cheatów - OBS: Nie można tego zrobić w menu głównym, musi być wykonane na serwerze. To jest tymczasowa poprawka." },
	{ "auto_reload_ammo", "Automatyczne Przeładowanie Amunicji" },
	{ "development_notice", "Obecnie w fazie rozwoju i bez wsparcia dla lokalizacji" }
};
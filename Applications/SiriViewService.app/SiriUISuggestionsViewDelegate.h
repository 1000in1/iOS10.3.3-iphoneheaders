/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISuggestionsViewDelegate <NSObject>
@optional
-(float)statusBarHeightForSuggestionsView:(id)arg1;
-(float)statusViewHeightForSuggestionsView:(id)arg1;
-(void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned)arg2;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;

@end


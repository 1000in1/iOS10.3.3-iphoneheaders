/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHCallParticipantsViewDelegate <NSObject>
@optional
-(id)colorForStatusLabelForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)fontForParticipantLabelForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(void)participantTappedAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(void)participantViewInfoButtonTappedAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)compactLabelTextForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(void)fieldModeSendButtonTappedInParticipantsView:(id)arg1;
-(char)shouldIgnoreUpdatesInParticipantsView:(id)arg1;

@required
-(unsigned)numberOfParticipantsForParticipantsView:(id)arg1;
-(id)overrideStringForParticipantsView:(id)arg1;
-(char)shouldShowSingleDurationLabelInParticipantsView:(id)arg1;
-(id)nameForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)labelForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)supplementalParticipantLabelFormatStringAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(id)contactForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(unsigned short)activityStateForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;
-(char)shouldShowInfoButtonForParticipantAtIndex:(unsigned)arg1 inParticipantsView:(id)arg2;

@end


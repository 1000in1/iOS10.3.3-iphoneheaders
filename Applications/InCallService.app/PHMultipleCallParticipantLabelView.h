/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <InCallService/PHAbstractCallParticipantLabelView.h>

@class NSLayoutConstraint, UILabel, UIActivityIndicatorView, UIButton;

@interface PHMultipleCallParticipantLabelView : PHAbstractCallParticipantLabelView {

	NSLayoutConstraint* _participantMarqueeLabelRightConstraint;
	UILabel* _statusLabel;
	NSLayoutConstraint* _statusLabelRightConstraint;
	UIActivityIndicatorView* _progressSpinner;
	UIButton* _conferenceParticipantsButton;

}

@property (retain) NSLayoutConstraint * participantMarqueeLabelRightConstraint;              //@synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint - In the implementation block
@property (retain) UILabel * statusLabel;                                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelRightConstraint;                          //@synthesize statusLabelRightConstraint=_statusLabelRightConstraint - In the implementation block
@property (retain) UIActivityIndicatorView * progressSpinner;                                //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (retain) UIButton * conferenceParticipantsButton;                                  //@synthesize conferenceParticipantsButton=_conferenceParticipantsButton - In the implementation block
-(void)setStatusLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setParticipantMarqueeLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIActivityIndicatorView *)progressSpinner;
-(NSLayoutConstraint *)participantMarqueeLabelRightConstraint;
-(void)setProgressSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setActivityState:(unsigned short)arg1 animated:(char)arg2 ;
-(float)labelAlphaValueForActivityState:(unsigned short)arg1 ;
-(void)setShowsActivitySpinner:(char)arg1 ;
-(void)setActivityState:(unsigned short)arg1 ;
-(void)setHidesLabel:(char)arg1 ;
-(UIButton *)conferenceParticipantsButton;
-(void)setConferenceParticipantsButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)statusLabelRightConstraint;
-(void)setLabelDescriptor:(id)arg1 ;
-(void)setShowsInfoButton:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTextColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)infoButtonTapped:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end


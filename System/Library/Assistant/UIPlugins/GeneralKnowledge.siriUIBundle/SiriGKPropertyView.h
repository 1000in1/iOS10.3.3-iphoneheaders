/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel;

@interface SiriGKPropertyView : SiriGKView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	char _hasSetUpConstraints;

}
-(id)initWithAnswerProperty:(id)arg1 ;
-(id)_labelFontForHighlighted:(char)arg1 ;
-(id)_decoratedString:(id)arg1 forRegions:(id)arg2 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(char)arg2 ;
-(float)_bottomMargin;
-(float)_lineHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
@end


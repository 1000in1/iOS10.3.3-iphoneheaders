/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class SAGKAlternateResult, UILabel;

@interface SiriGKAlternateResultView : SiriGKView {

	SAGKAlternateResult* _result;
	UILabel* _titleLabel;

}
-(id)selectionResponseTitle;
-(id)initWithAlternateResult:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


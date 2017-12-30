/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray;

@interface SiriMoviesMovieCreditsView : UIView {

	UILabel* _directorLabel;
	NSMutableArray* _directorNameLabelsArray;
	UILabel* _starringLabel;
	NSMutableArray* _starNameLabelsArray;

}
-(id)initWithFrame:(CGRect)arg1 movieDetailSnippet:(id)arg2 ;
-(CGSize)_calculateLayoutForSize:(CGSize)arg1 setFrame:(char)arg2 ;
-(float)_creditsViewWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


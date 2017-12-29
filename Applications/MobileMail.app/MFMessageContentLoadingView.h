/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface MFMessageContentLoadingView : UIView {

	UIActivityIndicatorView* _activityIndicatorView;
	UILabel* _loadingLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                            //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) UILabel * loadingLabel;                                                     //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (assign,getter=isLoadingIndicatorVisible,nonatomic) char loadingIndicatorVisible; 
-(void)setLoadingIndicatorVisible:(char)arg1 animated:(char)arg2 ;
-(char)isLoadingIndicatorVisible;
-(void)setLoadingIndicatorVisible:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(UILabel *)loadingLabel;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface PreviousDraftPickerHeaderView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _activityIndicatorView;
	char _hasDrafts;
	char _loading;
	char _completedFirstLoad;

}
-(void)setHasDrafts:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)updateUI;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)setLoading:(char)arg1 ;
@end


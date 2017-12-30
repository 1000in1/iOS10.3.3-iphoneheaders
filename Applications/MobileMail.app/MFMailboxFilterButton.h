/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage;

@interface MFMailboxFilterButton : UIButton {

	UIImage* _notSelectedFlatImage;
	UIImage* _selectedFlatImage;

}

@property (nonatomic,retain) UIImage * notSelectedFlatImage;                         //@synthesize notSelectedFlatImage=_notSelectedFlatImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedFlatImage;                            //@synthesize selectedFlatImage=_selectedFlatImage - In the implementation block
@property (assign,getter=isFilterEnabled,nonatomic) char filterEnabled; 
-(char)isFilterEnabled;
-(void)setSelectedFlatImage:(UIImage *)arg1 ;
-(void)setNotSelectedFlatImage:(UIImage *)arg1 ;
-(UIImage *)selectedFlatImage;
-(UIImage *)notSelectedFlatImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)_commonInit;
-(void)setFilterEnabled:(char)arg1 ;
@end


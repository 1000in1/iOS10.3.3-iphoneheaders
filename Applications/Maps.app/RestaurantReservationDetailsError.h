/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol RestaurantReservationDetailsError <NSObject>
@property (assign,nonatomic) char displayError; 
@property (nonatomic,copy) NSString * errorText; 
@property (nonatomic,copy) NSString * errorButtonText; 
@required
-(void)setDisplayError:(char)arg1 animated:(char)arg2;
-(void)addErrorButtonTouchUpInsideTarget:(id)arg1 action:(SEL)arg2;
-(char)displayError;
-(void)setDisplayError:(char)arg1;
-(void)setErrorText:(id)arg1;
-(NSString *)errorButtonText;
-(void)setErrorButtonText:(id)arg1;
-(NSString *)errorText;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class NSString;

@interface HOPendingAccessoriesGridViewController : HUServiceGridViewController <HFItemManagerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUser:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(char)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
@end


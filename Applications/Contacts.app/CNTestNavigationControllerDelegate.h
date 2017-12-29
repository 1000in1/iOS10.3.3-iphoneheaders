/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>

@protocol CNContactNavigationControllerDelegate;
@class NSString;

@interface CNTestNavigationControllerDelegate : NSObject <CNContactNavigationControllerDelegate> {

	id<CNContactNavigationControllerDelegate> _delegate;
	/*^block*/id _willShow;
	/*^block*/id _didShow;

}

@property (nonatomic,retain) id<CNContactNavigationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id willShow;                                                       //@synthesize willShow=_willShow - In the implementation block
@property (nonatomic,copy) id didShow;                                                        //@synthesize didShow=_didShow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithDelegate:(id)arg1 willShowViewControllerHandler:(/*^block*/id)arg2 didShowViewControllerHandler:(/*^block*/id)arg3 ;
-(void)setWillShow:(id)arg1 ;
-(void)setDidShow:(id)arg1 ;
-(char)_selfReallyRespondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<CNContactNavigationControllerDelegate>)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id<CNContactNavigationControllerDelegate>)delegate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)willShow;
-(id)didShow;
@end

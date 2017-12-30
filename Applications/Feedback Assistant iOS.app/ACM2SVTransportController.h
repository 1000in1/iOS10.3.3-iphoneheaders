/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACC2SVTransportControllerProtocol.h>

@protocol ACM2SVTransportControllerDelegate;
@class NSString;

@interface ACM2SVTransportController : NSObject <ACC2SVTransportControllerProtocol> {

	id<ACM2SVTransportControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<ACM2SVTransportControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<ACM2SVTransportControllerDelegate>)arg1 ;
-(id<ACM2SVTransportControllerDelegate>)delegate;
-(void)generateAndSendSecCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifySecureCodeWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadTrustedDevicesWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getImageWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelImageFetching;
@end


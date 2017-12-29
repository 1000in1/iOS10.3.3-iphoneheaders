/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageLoadingContext, _MFMessageLoadingContextRetryRegistry, MFCancelationToken;

@interface MFMessageLoadingContextRetryMiddleware : NSObject {

	char _shouldRetryOnNetworkChange;
	MFMessageLoadingContext* _loadingContext;
	/*^block*/id _handler;
	_MFMessageLoadingContextRetryRegistry* _registry;
	MFCancelationToken* _cancellationToken;

}

@property (nonatomic,retain) MFMessageLoadingContext * loadingContext;                      //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,copy) id handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) _MFMessageLoadingContextRetryRegistry * registry;              //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) MFCancelationToken * cancellationToken;                        //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (assign,nonatomic) char shouldRetryOnNetworkChange;                               //@synthesize shouldRetryOnNetworkChange=_shouldRetryOnNetworkChange - In the implementation block
-(MFCancelationToken *)cancellationToken;
-(void)setCancellationToken:(MFCancelationToken *)arg1 ;
-(id)initWithLoadingContext:(id)arg1 registry:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleLoadEvent:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryOnNetworkChange;
-(void)setShouldRetryOnNetworkChange:(char)arg1 ;
-(char)_shouldRetry;
-(id)initWithLoadingContext:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setRegistry:(_MFMessageLoadingContextRetryRegistry *)arg1 ;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_retry;
-(MFMessageLoadingContext *)loadingContext;
-(void)setLoadingContext:(MFMessageLoadingContext *)arg1 ;
-(_MFMessageLoadingContextRetryRegistry *)registry;
@end

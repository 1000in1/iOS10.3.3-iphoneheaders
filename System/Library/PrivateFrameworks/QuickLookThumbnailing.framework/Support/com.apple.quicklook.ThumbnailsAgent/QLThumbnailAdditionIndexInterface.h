/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLThumbnailAdditionIndexInterface
@required
-(void)updateFileSize:(unsigned)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeThumbnailForURL:(id)arg1 completion:(/*^block*/id)arg2;
-(void)retrieveAllAdditions:(/*^block*/id)arg1;
-(void)removeAllAdditions;
-(void)addThumbnailForURL:(id)arg1 size:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(char)arg2 andSize:(unsigned)arg3 completion:(/*^block*/id)arg4;

@end


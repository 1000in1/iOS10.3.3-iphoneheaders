/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVErrorResolver.h>
#import <TV/VideosRentalAlertControllerDelegate.h>

@protocol VideosRentalDataProtocol;
@class NSError, VideosRentalAlertController, NSString;

@interface VideosRentalErrorResolver : MPAVErrorResolver <VideosRentalAlertControllerDelegate> {

	NSError* _error;
	VideosRentalAlertController* _playbackAlertController;
	id<VideosRentalDataProtocol> _rentalData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_rentalDataDidLoadNotification:(id)arg1 ;
-(void)videosRentalAlertControllerDidCancel:(id)arg1 ;
-(void)videosRentalAlertControllerDidFinish:(id)arg1 ;
-(void)_cancelPlaybackAlertController:(char)arg1 ;
-(id)_mediaItem;
-(id)init;
-(void)dealloc;
-(void)resolveError:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(char)_errorIsFairPlayError:(id)arg1 ;
@end


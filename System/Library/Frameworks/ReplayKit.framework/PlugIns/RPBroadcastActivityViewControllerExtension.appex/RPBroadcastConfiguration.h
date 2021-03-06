/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:31:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/PlugIns/RPBroadcastActivityViewControllerExtension.appex/RPBroadcastActivityViewControllerExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding> {

	NSDictionary* _videoCompressionProperties;
	double _clipDuration;

}

@property (assign,nonatomic) double clipDuration;                                    //@synthesize clipDuration=_clipDuration - In the implementation block
@property (nonatomic,retain) NSDictionary * videoCompressionProperties;              //@synthesize videoCompressionProperties=_videoCompressionProperties - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)videoCompressionProperties;
-(double)clipDuration;
-(void)setClipDuration:(double)arg1 ;
-(void)setVideoCompressionProperties:(NSDictionary *)arg1 ;
@end


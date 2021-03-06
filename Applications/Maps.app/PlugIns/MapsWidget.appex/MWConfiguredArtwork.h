/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKArtworkImageSourceNSCoding;
@interface MWConfiguredArtwork : NSObject {

	id<MKArtworkImageSource><NSCoding> _artworkSource;
	float _alpha;

}

@property (nonatomic,readonly) id<MKArtworkImageSource><NSCoding> artworkSource;              //@synthesize artworkSource=_artworkSource - In the implementation block
@property (nonatomic,readonly) float alpha;                                                   //@synthesize alpha=_alpha - In the implementation block
-(id)initWithArtworkSource:(id)arg1 alpha:(float)arg2 ;
-(char)isEqualToConfiguredArtwork:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(float)alpha;
-(id<MKArtworkImageSource><NSCoding>)artworkSource;
@end


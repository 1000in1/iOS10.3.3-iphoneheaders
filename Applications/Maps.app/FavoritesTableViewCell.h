/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/TwoLinesTableViewCell.h>

@class MSPQuery;

@interface FavoritesTableViewCell : TwoLinesTableViewCell {

	MSPQuery* _cache;

}
-(void)updateCountOfFavoritesString:(id)arg1 ;
-(id)_secondaryTitlePlacesOnly:(unsigned)arg1 ;
-(id)_secondaryTitleTransitLineOnly:(unsigned)arg1 ;
-(id)_secondaryTitleForPlaceCount:(unsigned)arg1 transitLineCount:(unsigned)arg2 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end


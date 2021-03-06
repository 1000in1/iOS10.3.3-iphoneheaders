/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>
#import <MapsLockScreen/MapsTheming.h>

@class MapsTheme, NSString;

@interface MapsThemeTableViewCell : MKTableViewCell <MapsTheming> {

	MapsTheme* _mapsTheme;

}

@property (nonatomic,retain) MapsTheme * mapsTheme;                 //@synthesize mapsTheme=_mapsTheme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(void)setMapsTheme:(MapsTheme *)arg1 ;
-(MapsTheme *)mapsTheme;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface MFGradientView : UIView

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
@property (nonatomic,retain) NSArray * gradientColors; 
@property (nonatomic,retain) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
+(Class)layerClass;
-(void)setLocations:(NSArray *)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(NSArray *)locations;
-(CGPoint)endPoint;
@end

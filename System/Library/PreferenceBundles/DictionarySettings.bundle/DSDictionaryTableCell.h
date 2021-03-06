/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/DictionarySettings.bundle/DictionarySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class DUDefinitionDictionary, DSDownloadProgressButton;

@interface DSDictionaryTableCell : PSTableCell {

	DUDefinitionDictionary* _definitionDictionary;
	DSDownloadProgressButton* _downloadButton;

}

@property (nonatomic,retain) DUDefinitionDictionary * definitionDictionary;              //@synthesize definitionDictionary=_definitionDictionary - In the implementation block
@property (nonatomic,retain) DSDownloadProgressButton * downloadButton;                  //@synthesize downloadButton=_downloadButton - In the implementation block
+(int)cellStyle;
-(void)reloadDataWithAssetOperationState:(id)arg1 ;
-(void)setDefinitionDictionary:(DUDefinitionDictionary *)arg1 ;
-(void)setDownloadButton:(DSDownloadProgressButton *)arg1 ;
-(void)handleDownloadButtonPressed:(id)arg1 ;
-(DSDownloadProgressButton *)downloadButton;
-(DUDefinitionDictionary *)definitionDictionary;
-(void)layoutSubviews;
-(void)reloadData;
-(id)title;
-(id)subtitle;
-(void)updateLabels;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end


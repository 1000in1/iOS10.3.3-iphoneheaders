/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailWebProcessBundle.bundle/MailWebProcessBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, JSValue;


@protocol MFMailWebProcessDictionaryWrapperJSMethods <JSExport>
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,copy,readonly) NSDictionary * dictionary; 
@property (nonatomic,retain) JSValue * onChangeCallback; 
@optional
-(void)setObject:(id)arg1 forKey:(id)arg2 __JS_EXPORT_AS__setValue:(id)arg3;
-(id)objectForKey:(id)arg1 __JS_EXPORT_AS__getValue:(id)arg2;
-(void)removeObjectForKey:(id)arg1 __JS_EXPORT_AS__removeValueForKey:(id)arg2;

@required
-(void)setOnChangeCallback:(id)arg1;
-(JSValue *)onChangeCallback;
-(void)setName:(id)arg1;
-(NSString *)name;
-(id)objectForKey:(id)arg1;
-(NSDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


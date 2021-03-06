/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol INIntentSlotDescriptionExport <NSObject,JSExport>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long tag; 
@property (nonatomic,copy,readonly) NSString * facadePropertyName; 
@property (nonatomic,copy,readonly) NSString * dataPropertyName; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) long long valueStyle; 
@property (nonatomic,readonly) BOOL isExtended; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) SEL resolveSelector; 
@property (nonatomic,readonly) SEL deprecatedResolveSelector; 
@property (nonatomic,copy,readonly) NSArray * resolveSelectorStrings; 
@required
-(BOOL)isExtended;
-(long long)valueType;
-(BOOL)isPrivate;
-(id)init;
-(NSString *)facadePropertyName;
-(unsigned long long)tag;
-(long long)valueStyle;
-(SEL)deprecatedResolveSelector;
-(SEL)resolveSelector;
-(NSString *)dataPropertyName;
-(NSString *)name;
-(NSArray *)resolveSelectorStrings;

@end


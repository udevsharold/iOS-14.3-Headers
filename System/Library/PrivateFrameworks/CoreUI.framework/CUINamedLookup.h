/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString, CUIRenditionKey, CUIThemeRendition;

@interface CUINamedLookup : NSObject <NSLocking> {

	NSString* _name;
	CUIRenditionKey* _key;
	NSString* _signature;
	unsigned long long _storageRef;
	unsigned _distilledInVersion;
	os_unfair_lock_s _lock;
	unsigned _odContent : 1;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) CUIRenditionKey * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long storageRef;                 //@synthesize storageRef=_storageRef - In the implementation block
@property (nonatomic,readonly) CUIThemeRendition * _rendition; 
@property (nonatomic,readonly) CUIRenditionKey * renditionKey; 
@property (nonatomic,readonly) NSString * renditionName; 
@property (nonatomic,readonly) NSString * keySignature; 
@property (nonatomic,readonly) BOOL _cacheRenditionProperties; 
@property (nonatomic,readonly) unsigned _distilledInVersion; 
@property (nonatomic,readonly) unsigned long long subtype; 
@property (nonatomic,readonly) long long sizeClassHorizontal; 
@property (nonatomic,readonly) long long sizeClassVertical; 
@property (nonatomic,readonly) long long memoryClass; 
@property (nonatomic,readonly) long long graphicsClass; 
@property (nonatomic,readonly) long long appearanceIdentifier; 
@property (nonatomic,readonly) BOOL representsOnDemandContent; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) NSString * appearance; 
-(id)configuration;
-(CUIRenditionKey *)key;
-(unsigned long long)subtype;
-(void)setName:(NSString *)arg1 ;
-(void)setKey:(CUIRenditionKey *)arg1 ;
-(BOOL)_cacheRenditionProperties;
-(NSString *)renditionName;
-(long long)appearanceIdentifier;
-(CUIThemeRendition *)_rendition;
-(long long)layoutDirection;
-(void)setRepresentsOnDemandContent:(BOOL)arg1 ;
-(long long)memoryClass;
-(long long)graphicsClass;
-(long long)idiom;
-(void)unlock;
-(NSString *)keySignature;
-(NSString *)appearance;
-(void)dealloc;
-(unsigned)_distilledInVersion;
-(BOOL)isTintable;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CUIRenditionKey *)renditionKey;
-(unsigned long long)hash;
-(long long)sizeClassVertical;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)storageRef;
-(NSString *)name;
-(void)setStorageRef:(unsigned long long)arg1 ;
-(long long)sizeClassHorizontal;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(void)lock;
-(BOOL)representsOnDemandContent;
-(long long)displayGamut;
@end


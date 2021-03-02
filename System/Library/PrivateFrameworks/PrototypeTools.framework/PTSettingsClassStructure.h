/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSSet;

@interface PTSettingsClassStructure : NSObject <NSSecureCoding> {

	NSDictionary* _structNames;
	NSDictionary* _classes;
	NSDictionary* _classNames;
	NSString* _settingsClassName;
	unsigned long long _settingsClassVersion;
	NSSet* _leafKeys;
	NSSet* _childKeys;
	NSSet* _outletKeys;

}

@property (nonatomic,retain) NSString * settingsClassName;                         //@synthesize settingsClassName=_settingsClassName - In the implementation block
@property (assign,nonatomic) unsigned long long settingsClassVersion;              //@synthesize settingsClassVersion=_settingsClassVersion - In the implementation block
@property (nonatomic,retain) NSSet * leafKeys;                                     //@synthesize leafKeys=_leafKeys - In the implementation block
@property (nonatomic,retain) NSSet * childKeys;                                    //@synthesize childKeys=_childKeys - In the implementation block
@property (nonatomic,retain) NSSet * outletKeys;                                   //@synthesize outletKeys=_outletKeys - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)childKeys;
-(void)setOutletKeys:(NSSet *)arg1 ;
-(Class)childClassForKey:(id)arg1 ;
-(void)setChildKeys:(NSSet *)arg1 ;
-(NSString *)settingsClassName;
-(unsigned long long)settingsClassVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(Class)_classForKey:(id)arg1 ;
-(void)setSettingsClassVersion:(unsigned long long)arg1 ;
-(void)_generateClassNamesIfNecessary;
-(BOOL)isEqual:(id)arg1 ;
-(id)filteredForProxySettings;
-(id)_decodeStringStringDictionaryForKey:(id)arg1 withCoder:(id)arg2 ;
-(void)setSettingsClassName:(NSString *)arg1 ;
-(NSSet *)leafKeys;
-(id)_decodeStringSetForKey:(id)arg1 withCoder:(id)arg2 ;
-(void)setLeafKeys:(NSSet *)arg1 ;
-(id)leafStructNameForKey:(id)arg1 ;
-(NSSet *)outletKeys;
-(Class)leafClassForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSMutableDictionary;

@interface HFLocalizableStringKey : NSObject <NSCopying> {

	NSArray* _argumentKeys;
	NSString* _key;
	NSMutableDictionary* _argumentMap;
	/*^block*/id _stringLocalizationBlock;

}

@property (nonatomic,copy) id stringLocalizationBlock;                         //@synthesize stringLocalizationBlock=_stringLocalizationBlock - In the implementation block
@property (nonatomic,retain) NSString * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSArray * argumentKeys;                           //@synthesize argumentKeys=_argumentKeys - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * argumentMap;              //@synthesize argumentMap=_argumentMap - In the implementation block
+(id)stringKeyWithKey:(id)arg1 arguments:(id)arg2 ;
+(id)stringKeyWithKey:(id)arg1 argumentKeys:(id)arg2 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStringLocalizationBlock:(id)arg1 ;
-(id)initWithKey:(id)arg1 argumentKeys:(id)arg2 ;
-(NSMutableDictionary *)argumentMap;
-(id)description;
-(id)stringLocalizationBlock;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)argumentKeys;
-(id)debugDescription;
-(id)localizedStringWithArgumentBlock:(/*^block*/id)arg1 ;
-(void)setArgumentKeys:(NSArray *)arg1 ;
@end


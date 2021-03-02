/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NSMutableDictionary, NSArray;

@interface SXJSONDictionary : SXJSONObject <NSFastEnumeration> {

	/*^block*/id _objectValueClassBlock;
	/*^block*/id _valueClassBlock;
	NSDictionary* _json;
	NSMutableDictionary* _objects;
	NSArray* _keys;
	unsigned long long _count;

}

@property (nonatomic,readonly) id objectValueClassBlock;                   //@synthesize objectValueClassBlock=_objectValueClassBlock - In the implementation block
@property (nonatomic,readonly) id valueClassBlock;                         //@synthesize valueClassBlock=_valueClassBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * json;                        //@synthesize json=_json - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * objects;              //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSArray * keys;                             //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                   //@synthesize count=_count - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(NSArray *)keys;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSDictionary *)json;
-(id)allObjects;
-(id)description;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SX16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)jsonDictionary;
-(unsigned long long)count;
-(id)JSONRepresentation;
-(NSMutableDictionary *)objects;
-(id)NSDictionary;
-(id)objectValueClassBlock;
-(id)initWithValueClassBlock:(/*^block*/id)arg1 objectValueClassBlock:(/*^block*/id)arg2 purgeBlock:(/*^block*/id)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5 ;
-(id)valueClassBlock;
@end

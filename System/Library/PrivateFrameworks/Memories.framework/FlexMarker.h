/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDictionaryCoding.h>

@class NSString;

@interface FlexMarker : NSObject <NSDictionaryCoding> {

	NSString* _name;
	long long _markerID;
	long long _position;
	unsigned long long _type;
	long long _number;

}

@property (nonatomic,copy,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long markerID;                   //@synthesize markerID=_markerID - In the implementation block
@property (nonatomic,readonly) long long position;                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long number;                     //@synthesize number=_number - In the implementation block
-(id)init;
-(long long)number;
-(id)description;
-(unsigned long long)type;
-(long long)position;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(id)encodeAsDictionary;
-(unsigned long long)_decodeTypeAndBarsFromName;
-(long long)markerID;
-(id)initWithName:(id)arg1 markerID:(long long)arg2 position:(long long)arg3 ;
@end


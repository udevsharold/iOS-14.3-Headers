/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBLocalZoneID.h>

@class NSData, NSString, NSArray;

@interface HMBLocalZoneIDUnshared : HMFObject <HMBLocalZoneID> {

	NSString* _name;

}

@property (nonatomic,readonly) NSData * token; 
@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * labels; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(NSArray *)labels;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSData *)token;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
@end

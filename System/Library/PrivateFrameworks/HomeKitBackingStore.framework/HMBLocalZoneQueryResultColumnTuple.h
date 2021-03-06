/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMBModelField;

@interface HMBLocalZoneQueryResultColumnTuple : HMFObject {

	int _offset;
	NSString* _name;
	HMBModelField* _modelField;

}

@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int offset;                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) HMBModelField * modelField;              //@synthesize modelField=_modelField - In the implementation block
-(int)offset;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3 ;
-(HMBModelField *)modelField;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKSerializer.h>

@class EKEventStore, NSString;

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer> {

	EKEventStore* _eventStore;
	NSString* _version;

}

@property (nonatomic,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) NSString * version;                     //@synthesize version=_version - In the implementation block
-(id)serializeEvent:(id)arg1 error:(id*)arg2 ;
-(id)deserializeData:(id)arg1 error:(id*)arg2 ;
-(id)versionFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithEventStore:(id)arg1 withVersion:(id)arg2 ;
-(EKEventStore *)eventStore;
-(NSString *)version;
@end

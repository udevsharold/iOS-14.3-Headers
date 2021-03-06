/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOXPCSerializable.h>

@protocol OS_xpc_object;
@class NSObject, NSError, NSString;

@interface GEOXPCReply : NSObject <GEOXPCSerializable> {

	unsigned char _flags;
	NSObject*<OS_xpc_object> _object;
	NSError* _error;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;                         //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> replyDictionary; 
@property (nonatomic,readonly) unsigned char flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(NSError *)error;
-(id)init;
-(void)send;
-(NSObject*<OS_xpc_object>)object;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)description;
-(void)setError:(NSError *)arg1 ;
-(unsigned char)flags;
@end


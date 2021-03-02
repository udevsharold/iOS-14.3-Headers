/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, NSMutableDictionary, NSLock;

@interface PROConcretePlugInGroup : NSObject {

	NSMutableArray* plugIns;
	CFUUIDRef uuidRef;
	NSString* name;
	NSString* displayName;
	NSMutableDictionary* protocols;
	NSLock* mutex;

}
-(void)dealloc;
-(unsigned long long)hash;
-(id)uuidString;
-(CFUUIDRef)uuid;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(id)plugIns;
-(id)displayName;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)addPlugIn:(id)arg1 ;
-(BOOL)isEqualToPlugInGroup:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
-(void)removePlugIn:(id)arg1 ;
@end

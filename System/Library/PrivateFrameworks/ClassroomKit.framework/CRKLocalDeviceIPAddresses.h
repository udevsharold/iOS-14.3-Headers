/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CRKLocalDeviceIPAddresses : NSObject {

	NSSet* _IPAddresses;

}

@property (nonatomic,copy,readonly) NSSet * IPAddresses;              //@synthesize IPAddresses=_IPAddresses - In the implementation block
+(id)makeIPAddresses;
-(id)init;
-(NSSet *)IPAddresses;
-(BOOL)containsIPAddress:(id)arg1 ;
@end


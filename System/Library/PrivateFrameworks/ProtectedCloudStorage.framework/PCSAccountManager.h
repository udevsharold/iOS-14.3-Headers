/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PCSAccountManager : NSObject {

	NSString* _dsid;

}

@property (retain) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithDSID:(id)arg1 ;
-(unsigned long long)accountStatus;
@end

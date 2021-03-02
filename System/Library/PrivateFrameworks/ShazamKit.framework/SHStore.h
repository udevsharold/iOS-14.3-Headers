/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SHStore : NSObject

@property (nonatomic,readonly) double minimumSignatureLength; 
@property (nonatomic,readonly) double maximumSignatureLength; 
-(id)deviceModel;
-(id)_init;
-(void)preload;
-(id)deviceProductVersion;
-(id)deviceOSVersion;
-(id)systemInfoByName:(char*)arg1 ;
-(double)minimumSignatureLength;
-(double)maximumSignatureLength;
-(id)frameworkShortVersion;
-(id)deviceSystemName;
-(id)createMatcher;
@end

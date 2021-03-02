/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSSignalModel.h>

@class CLSSignalNode, NSString;

@interface CLSFaceModel : NSObject <CLSSignalModel> {

	unsigned long long _version;
	unsigned long long _minimumSupportedVersion;
	CLSSignalNode* _qualityNode;

}

@property (readonly) CLSSignalNode * qualityNode;                             //@synthesize qualityNode=_qualityNode - In the implementation block
@property (readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)currentAnalyzerVersion;
+(id)modelWithVersion:(unsigned long long)arg1 ;
+(unsigned long long)latestVersion;
+(id)name;
-(void)setupVersion1;
-(unsigned long long)minimumSupportedVersion;
-(CLSSignalNode *)qualityNode;
-(id)initWithVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSURL, NSString;

@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> mBaseProvider;
	NSURL* _classroomAppBundleURL;

}

@property (nonatomic,retain) NSURL * classroomAppBundleURL;              //@synthesize classroomAppBundleURL=_classroomAppBundleURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 ;
-(id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg1 ;
-(NSURL *)classroomAppBundleURL;
-(void)setClassroomAppBundleURL:(NSURL *)arg1 ;
@end


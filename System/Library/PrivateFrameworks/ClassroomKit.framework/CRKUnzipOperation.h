/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <Catalyst/CATOperation.h>

@class NSURL, NSError;

@interface CRKUnzipOperation : CATOperation {

	NSURL* _zipFileURL;
	NSURL* _destinationDirectoryURL;
	BOMCopierRef _copier;
	NSError* _stashedError;

}

@property (nonatomic,readonly) NSURL * zipFileURL;                           //@synthesize zipFileURL=_zipFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationDirectoryURL;              //@synthesize destinationDirectoryURL=_destinationDirectoryURL - In the implementation block
@property (assign) BOMCopierRef copier;                                      //@synthesize copier=_copier - In the implementation block
@property (nonatomic,retain) NSError * stashedError;                         //@synthesize stashedError=_stashedError - In the implementation block
+(id)errorFromBOMCopierStatus:(int)arg1 message:(id)arg2 ;
-(void)main;
-(void)operationWillFinish;
-(BOMCopierRef)copier;
-(void)cancel;
-(id)initWithZipFileURL:(id)arg1 ;
-(id)initWithZipFileURL:(id)arg1 destinationDirectoryURL:(id)arg2 ;
-(void)setCopier:(BOMCopierRef)arg1 ;
-(NSURL *)destinationDirectoryURL;
-(NSURL *)zipFileURL;
-(NSError *)stashedError;
-(void)setStashedError:(NSError *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryPathManager, PFTimedPerfCheck, PLModelMigratorLog;

@interface PLModelMigratorPostProcessor : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	unsigned char _type;
	unsigned short _tag;
	PFTimedPerfCheck* _lifetimePerfCheck;
	PLModelMigratorLog* _logger;
	BOOL _success;

}

@property (assign,getter=isSuccess,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
@property (readonly) PLModelMigratorLog * logger;                        //@synthesize logger=_logger - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(id)init;
-(void)dealloc;
-(void)_initialLog;
-(id)initWithPathManager:(id)arg1 postMigrationType:(unsigned char)arg2 ;
-(id)_generateActionTagHashBase;
-(id)_generateActionTagHash;
-(PLModelMigratorLog *)logger;
@end


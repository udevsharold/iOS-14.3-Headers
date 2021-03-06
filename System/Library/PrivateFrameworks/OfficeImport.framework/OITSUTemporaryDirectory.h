/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OITSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)initWithError:(id*)arg1 ;
-(id)init;
-(id)path;
-(void)dealloc;
-(id)URL;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithSignature:(id)arg1 error:(id*)arg2 ;
-(id)initForWritingToURL:(id)arg1 error:(id*)arg2 ;
-(void)leakTemporaryDirectory;
@end


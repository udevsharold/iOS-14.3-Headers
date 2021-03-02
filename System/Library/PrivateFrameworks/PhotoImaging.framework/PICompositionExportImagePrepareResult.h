/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUImageExportRequest;

@interface PICompositionExportImagePrepareResult : NSObject {

	NUImageExportRequest* _request;
	SCD_Struct_PI5 _inputSize;

}

@property (retain) NUImageExportRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize;                    //@synthesize inputSize=_inputSize - In the implementation block
-(NUImageExportRequest *)request;
-(void)setRequest:(NUImageExportRequest *)arg1 ;
-(SCD_Struct_PI5)inputSize;
-(void)setInputSize:(SCD_Struct_PI5)arg1 ;
@end

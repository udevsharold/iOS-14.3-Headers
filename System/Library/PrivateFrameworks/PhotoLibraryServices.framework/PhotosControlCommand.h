/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray;

@interface PhotosControlCommand : NSObject {

	NSArray* _args;
	unsigned char _options;

}

@property (readonly) BOOL isVerbose; 
+(id)usage;
+(option*)longopts;
+(id)usagesummary;
+(long long)maximumArgs;
+(long long)minimumArgs;
+(id)abbreviations;
+(id)name;
+(const char*)optstring;
-(id)args;
-(id)init;
-(void)output:(id)arg1 ;
-(BOOL)processOption:(int)arg1 arg:(id)arg2 ;
-(void)outputError:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(char**)arg2 options:(unsigned char)arg3 ;
-(id)description;
-(void)willProcessOptions;
-(BOOL)processArgc:(int)arg1 argv:(char**)arg2 ;
-(void)output:(id)arg1 arguments:(char*)arg2 ;
-(void)outputError:(id)arg1 arguments:(char*)arg2 ;
-(id)dataForPathOrStdin:(id)arg1 ;
-(BOOL)writeData:(id)arg1 toPathOrStdout:(id)arg2 ;
-(void)waitForSigInt;
-(BOOL)isVerbose;
@end

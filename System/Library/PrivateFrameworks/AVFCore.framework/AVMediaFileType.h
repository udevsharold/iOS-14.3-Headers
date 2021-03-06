/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVDispatchOnce, NSSet;

@interface AVMediaFileType : NSObject <NSCopying> {

	NSString* _uti;
	AVDispatchOnce* _supportsSampleReferencesOnce;
	BOOL _supportsSampleReferences;

}

@property (nonatomic,readonly) NSString * defaultFileExtension; 
@property (nonatomic,readonly) NSSet * supportedMediaTypes; 
@property (nonatomic,readonly) BOOL supportsSampleReferences; 
@property (nonatomic,readonly) NSString * UTI; 
@property (nonatomic,readonly) NSString * figFormatReaderFileFormat; 
@property (nonatomic,readonly) unsigned audioFileTypeID; 
+(void)initialize;
+(id)allFileTypeIdentifiers;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg1 ;
+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
+(CFStringRef)figFileTypeProfileFromAVFileTypeProfile:(id)arg1 ;
+(id)isoFileTypes;
-(BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(NSSet *)supportedMediaTypes;
-(BOOL)supportsFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)figFormatReaderFileFormat;
-(id)description;
-(NSString *)defaultFileExtension;
-(id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(unsigned)audioFileTypeID;
-(NSString *)UTI;
-(BOOL)supportsSampleReferences;
@end


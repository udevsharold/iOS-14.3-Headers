/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFileHandle, NSNumber;

@interface CKFileOpenResult : NSObject <NSSecureCoding> {

	NSFileHandle* _fileHandle;
	NSFileHandle* _encryptedFileHandle;
	NSNumber* _fileSize;
	mkbbackuprefRef _handle;

}

@property (assign,nonatomic) mkbbackuprefRef handle;                          //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                       //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * encryptedFileHandle;              //@synthesize encryptedFileHandle=_encryptedFileHandle - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(mkbbackuprefRef)arg1 ;
-(void)dealloc;
-(NSFileHandle *)fileHandle;
-(mkbbackuprefRef)handle;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMobileKeyBagHandle:(mkbbackuprefRef)arg1 path:(id)arg2 error:(id*)arg3 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(NSFileHandle *)encryptedFileHandle;
-(void)setEncryptedFileHandle:(NSFileHandle *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary;

@interface CRKAirDropItem : NSObject {

	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName; 
@property (nonatomic,copy,readonly) NSString * UTI; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSString *)fileName;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)UTI;
-(id)copyToFolder:(id)arg1 error:(id*)arg2 ;
-(id)moveToFolder:(id)arg1 error:(id*)arg2 ;
@end

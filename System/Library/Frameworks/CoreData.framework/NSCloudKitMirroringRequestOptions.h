/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
-(id)init;
-(void)dealloc;
-(id)copy;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(CKOperationConfiguration *)operationConfiguration;
-(void)setQualityOfService:(long long)arg1 ;
-(long long)qualityOfService;
-(BOOL)allowsCellularAccess;
@end


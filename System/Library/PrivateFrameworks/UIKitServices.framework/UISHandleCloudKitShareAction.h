/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UISHandleCloudKitShareAction : BSAction {

	CKShareMetadata* _cachedMetadata;

}

@property (nonatomic,readonly) CKShareMetadata * shareMetadata; 
+(id)cloudKitShareActionWithShareMetadata:(id)arg1 ;
+(void)loadCloudKitFramework;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)data;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(id)initWithShareMetadata:(id)arg1 ;
-(long long)UIActionType;
@end


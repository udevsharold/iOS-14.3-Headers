/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString, FPItemID;

@interface FPCreateFolderOperation : FPActionOperation {

	FPItem* _parentItem;
	NSString* _folderFilename;
	FPItemID* _placeholderID;
	BOOL _shouldBounceOnCollision;
	/*^block*/id _createFolderCompletionBlock;

}

@property (assign,nonatomic) BOOL shouldBounceOnCollision;              //@synthesize shouldBounceOnCollision=_shouldBounceOnCollision - In the implementation block
@property (nonatomic,copy) id createFolderCompletionBlock;              //@synthesize createFolderCompletionBlock=_createFolderCompletionBlock - In the implementation block
-(void)actionMain;
-(void)setShouldBounceOnCollision:(BOOL)arg1 ;
-(void)presendNotifications;
-(BOOL)shouldBounceOnCollision;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createFolderCompletionBlock;
-(void)setCreateFolderCompletionBlock:(id)arg1 ;
-(id)initWithParentItem:(id)arg1 folderName:(id)arg2 ;
@end


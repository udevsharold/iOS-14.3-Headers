/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFPhotoPickerControllerDelegate <NSObject>
@optional
-(void)photoPickerDidCancel:(id)arg1;
-(void)photoPickerDidCancelSystemImagePicker:(id)arg1;
-(void)photoPicker:(id)arg1 didDeselectAssetWithIdentifier:(id)arg2;
-(id)presentingViewControllerForPhotoPicker:(id)arg1;

@required
-(void)photoPicker:(id)arg1 didSelectAssetWithIdentifier:(id)arg2 mediaInfo:(id)arg3;

@end

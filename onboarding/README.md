# Onboarding

This folder contains setup and orientation notes for contributors. The project is still being established, so the guidance below focuses on broadly useful practices rather than project-specific requirements.

## Start here

1. Read the repository README and review the current directory structure.
2. Check open issues, pull requests, and project documentation before starting work.
3. Ask questions early when requirements or expected behavior are unclear.
4. Keep changes focused and document assumptions that may affect future work.

## Good development practices

- Create a branch for each feature, fix, or documentation change.
- Use clear, descriptive branch names and commit messages.
- Keep pull requests small enough to review easily.
- Explain what changed, why it changed, and how it was tested.
- Avoid committing secrets, credentials, private keys, generated files, or local environment files.
- Prefer configuration through documented settings or environment variables rather than hard-coded values.
- Update documentation when setup, behavior, or file structure changes.
- Remove temporary debugging code before opening a pull request.

## Code quality

- Follow the formatting and style conventions already present in the repository.
- Use meaningful names and keep functions and modules focused.
- Handle errors explicitly and provide useful messages.
- Add tests for new behavior and regression fixes where practical.
- Review your own diff before requesting review.

## Testing and verification

Before submitting work:

1. Run the available automated tests.
2. Run formatters, linters, or type checks when configured.
3. Verify documentation examples and commands when they are affected.
4. Describe any tests that could not be run and explain why.

## Collaboration

- Be respectful, constructive, and specific in reviews and discussions.
- Link related issues, documentation, and pull requests.
- Prefer discussion in the repository so decisions remain discoverable.
- Do not merge work that has unresolved blocking feedback.
- Keep the default branch stable and usable.

## Local environment

Project-specific setup instructions will be added here as the application, dependencies, and development workflow are established. Until then, avoid assuming that a particular operating system, runtime version, toolchain, or deployment environment is required.

## Onboarding task document

Follow the onboarding tasks in the [onboarding task document](https://docs.google.com/document/d/19Bl8uAe9YuL2PH2SKLVZ-qk1pNYBK-Oz4UPnakaUHlc/edit?usp=sharing).
